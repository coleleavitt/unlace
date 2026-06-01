__int64 __fastcall sub_8ED0(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v9; // rdx
  bool v10; // zf
  unsigned __int64 *v11; // rax
  unsigned __int64 *v12; // rdx
  unsigned __int64 v13; // rcx
  __int64 v14; // rsi
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // r15
  unsigned __int64 v20; // rax
  int v21; // ebx
  __int64 result; // rax
  __int64 v23; // rdi
  unsigned int v24; // r12d
  __int64 v25; // rsi
  unsigned int *v26; // rax
  __int64 v27; // rdx
  bool v28; // dl
  unsigned __int64 v29; // [rsp+0h] [rbp-98h]
  unsigned int v30; // [rsp+0h] [rbp-98h]
  __int64 v31; // [rsp+10h] [rbp-88h]
  unsigned __int64 v32; // [rsp+18h] [rbp-80h]
  _QWORD v35[2]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v36; // [rsp+40h] [rbp-58h] BYREF
  __int128 v37; // [rsp+48h] [rbp-50h]
  unsigned __int64 v38; // [rsp+58h] [rbp-40h]

  v38 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a6 + 32) != 1 )
  {
    if ( !under_debugger )
      interr(20135);
    BUG();
  }
  v9 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
  v35[0] = v9 & a3;
  v10 = *(_QWORD *)(a2 + 16) == 0;
  v35[1] = v9 & (a3 + a4);
  if ( !v10 && !(unsigned __int8)rangeset_t_has_common(a2 + 8, v35, 0) )
    return 0;
  v11 = *(unsigned __int64 **)(a1 + 528);
  v12 = &v11[4 * *(_QWORD *)(a1 + 536)];
  if ( v11 == v12 )
    return 0xFFFFFFFFLL;
  while ( 1 )
  {
    v13 = *v11;
    if ( a3 >= *v11 && v11[1] >= a3 - v13 )
      break;
    v11 += 4;
    if ( v12 == v11 )
      return 0xFFFFFFFFLL;
  }
  v14 = v11[2] + a3 - v13;
  if ( v14 == -1 || qlseek(*(_QWORD *)(a1 + 8), v14, 0) != v14 )
    return 0xFFFFFFFFLL;
  v36 = 0;
  v17 = 0;
  v37 = 0;
  if ( a4 )
  {
    v36 = qvector_reserve(&v36, 0, a4, 1, v15, v16);
    memset((void *)(v36 + v37), 0, a4 - v37);
    *(_QWORD *)&v37 = a4;
    v17 = v36;
  }
  v18 = qlread(*(_QWORD *)(a1 + 8), v17, a4);
  if ( v18 <= 0 )
  {
    v23 = v36;
    result = 0xFFFFFFFFLL;
    if ( v36 )
      goto LABEL_19;
    return result;
  }
  v31 = 4;
  v19 = v36;
  v32 = v36 + v18;
  if ( *(_BYTE *)(a1 + 773) )
    v31 = 8;
  v29 = 0;
  v20 = *(unsigned int *)(a6 + 64);
LABEL_14:
  if ( v29 < v20 )
  {
    while ( 1 )
    {
      v21 = *(unsigned __int8 *)(a5 + v29);
      if ( (_BYTE)v21 )
        break;
LABEL_16:
      if ( ++v29 >= v20 )
        goto LABEL_17;
    }
    v24 = 0;
    while ( 1 )
    {
      if ( _bittest(&v21, v24) )
      {
        v25 = 32 * v29 + (int)(4 * v24);
        if ( v32 < v19 + v25 + v31 )
        {
          v20 = *(unsigned int *)(a6 + 64);
          goto LABEL_16;
        }
        v26 = (unsigned int *)(v19 + v25);
        if ( *(_BYTE *)(a1 + 773) )
          v27 = *(_QWORD *)v26;
        else
          v27 = *v26;
        result = (**(__int64 (__fastcall ***)(__int64, __int64, __int64))a2)(a2, a3 + v25, v27);
        v28 = (_DWORD)result == 0;
        if ( ++v24 == 8 )
        {
LABEL_29:
          ++v29;
          if ( (_DWORD)result )
            goto LABEL_18;
          v20 = *(unsigned int *)(a6 + 64);
          goto LABEL_14;
        }
      }
      else
      {
        ++v24;
        v28 = 1;
        result = 0;
        if ( v24 == 8 )
          goto LABEL_29;
      }
      if ( !v28 )
        goto LABEL_29;
    }
  }
LABEL_17:
  result = 0;
LABEL_18:
  v23 = v36;
  if ( v36 )
  {
LABEL_19:
    v30 = result;
    *(_QWORD *)&v37 = 0;
    qfree(v23);
    return v30;
  }
  return result;
}

