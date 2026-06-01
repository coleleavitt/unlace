__int64 __fastcall sub_9210(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v6; // rdx
  __int64 v7; // rax
  bool v8; // zf
  _QWORD *v9; // rax
  _QWORD *v10; // rdx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rbx
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 *v19; // r15
  __int64 v20; // rbx
  __int64 v21; // rbp
  __int64 v22; // r10
  __int64 v23; // rax
  __int64 result; // rax
  unsigned int v25; // edx
  bool v26; // dl
  unsigned __int64 v28; // rbx
  __int64 v30; // rdi
  unsigned __int64 v31; // [rsp+8h] [rbp-80h]
  unsigned int v32; // [rsp+8h] [rbp-80h]
  unsigned __int64 v34; // [rsp+18h] [rbp-70h]
  _QWORD v35[2]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v36; // [rsp+30h] [rbp-58h] BYREF
  __int128 v37; // [rsp+38h] [rbp-50h]
  unsigned __int64 v38; // [rsp+48h] [rbp-40h]

  v38 = __readfsqword(0x28u);
  if ( (unsigned int)(*(_DWORD *)(a4 + 32) - 2) > 3 )
  {
    if ( !under_debugger )
      interr(20104);
    BUG();
  }
  v6 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
  v7 = v6 & (a3 + *(unsigned int *)(a4 + 144));
  v8 = *(_QWORD *)(a2 + 16) == 0;
  v35[0] = a3 & v6;
  v35[1] = v7;
  if ( !v8 && !(unsigned __int8)rangeset_t_has_common(a2 + 8, v35, 0) )
    return 0;
  v9 = *(_QWORD **)(a1 + 528);
  v10 = &v9[4 * *(_QWORD *)(a1 + 536)];
  if ( v9 == v10 )
    return 0xFFFFFFFFLL;
  while ( 1 )
  {
    if ( a3 >= *v9 )
    {
      v11 = a3 - *v9;
      if ( v9[1] >= v11 )
        break;
    }
    v9 += 4;
    if ( v10 == v9 )
      return 0xFFFFFFFFLL;
  }
  v12 = v9[2] + v11;
  if ( v12 == -1 || qlseek(*(_QWORD *)(a1 + 8), v12, 0) != v12 )
    return 0xFFFFFFFFLL;
  v15 = *(unsigned int *)(a4 + 144);
  v16 = 0;
  v36 = 0;
  v37 = 0;
  if ( v15 )
  {
    v36 = qvector_reserve(&v36, 0, v15, 1, v13, v14);
    memset((void *)(v36 + v37), 0, v15 - v37);
    *(_QWORD *)&v37 = v15;
    v16 = v36;
    v15 = *(unsigned int *)(a4 + 144);
  }
  v17 = qlread(*(_QWORD *)(a1 + 8), v16, v15);
  if ( v17 <= 0 )
  {
    v30 = v36;
    result = 0xFFFFFFFFLL;
    if ( v36 )
      goto LABEL_35;
    return result;
  }
  v18 = 4;
  if ( *(_BYTE *)(a1 + 773) )
    v18 = 8;
  v19 = (__int64 *)v36;
  v20 = 1;
  v21 = 0;
  v34 = v36 + v17 - v18;
  while ( v34 >= (unsigned __int64)v19 )
  {
    if ( *(_BYTE *)(a1 + 773) )
      v22 = *v19;
    else
      v22 = *(unsigned int *)v19;
    v31 = v22;
    v23 = sub_8E10(v22, a4);
    result = (**(__int64 (__fastcall ***)(__int64, __int64, __int64))a2)(a2, a3 + v21, v23);
    v25 = *(_DWORD *)(a4 + 32);
    if ( v25 == 4 )
    {
LABEL_30:
      _RCX = *(_QWORD *)(a4 + 152);
      v28 = _RCX & v31;
      if ( !_RCX )
        goto LABEL_34;
      __asm { tzcnt   rcx, rcx }
      v20 = v28 >> ((unsigned __int8)_RCX - 2);
      v26 = v20 != 0;
      goto LABEL_20;
    }
    if ( v25 > 4 )
    {
      if ( v25 == 5 )
      {
        v20 = (v31 >> 49) & 0x3FF8;
        v26 = ((v31 >> 49) & 0x3FF8) != 0;
        goto LABEL_20;
      }
    }
    else
    {
      if ( v25 == 2 )
        goto LABEL_30;
      if ( v25 == 3 )
      {
        v20 = 8 * ((v31 & *(_QWORD *)(a4 + 152)) >> 51);
        v26 = v20 != 0;
        goto LABEL_20;
      }
    }
    v26 = 1;
LABEL_20:
    v21 += v20;
    v19 = (__int64 *)((char *)v19 + v20);
    if ( (_DWORD)result || !v26 )
      goto LABEL_34;
  }
  result = 0;
LABEL_34:
  v30 = v36;
  if ( v36 )
  {
LABEL_35:
    v32 = result;
    *(_QWORD *)&v37 = 0;
    qfree(v30);
    return v32;
  }
  return result;
}

