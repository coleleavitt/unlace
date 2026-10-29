__int64 __fastcall sub_5F830(__int64 a1, _QWORD *a2)
{
  int v2; // r12d
  int v4; // r12d
  int v6; // ebp
  __int64 v7; // rdx
  unsigned __int64 v8; // rsi
  __int64 v9; // rax
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  char v12; // r8
  unsigned __int64 v13; // rdx
  __int64 result; // rax
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rax
  unsigned __int64 v19; // rbp
  __int64 v20; // rax
  char v21; // r8
  unsigned __int64 v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rsi
  __int64 v26; // rax
  char v27; // [rsp+0h] [rbp-58h]
  char v28; // [rsp+0h] [rbp-58h]
  unsigned __int8 v29; // [rsp+16h] [rbp-42h] BYREF
  char v30; // [rsp+17h] [rbp-41h] BYREF
  unsigned __int64 v31; // [rsp+18h] [rbp-40h]

  v2 = *(unsigned __int16 *)(a1 + 88);
  v31 = __readfsqword(0x28u);
  v4 = (v2 + 1) >> 1;
  if ( v4 )
  {
    v6 = 0;
    while ( 1 )
    {
      result = (*(__int64 (__fastcall **)(_QWORD, unsigned __int8 *, __int64))(*(_QWORD *)*a2 + 48LL))(*a2, &v29, 1);
      if ( !(_BYTE)result )
        break;
      v23 = *(_QWORD *)(a1 + 104);
      v22 = *(_QWORD *)(a1 + 96);
      v15 = *(_QWORD *)(a1 + 112);
      v21 = v29 >> 4;
      v16 = v23 + 1;
      v30 = v29 >> 4;
      if ( (unsigned __int64)&v30 < v22 || (unsigned __int64)&v30 >= v22 + v15 )
      {
        if ( v15 < v16 )
        {
          v17 = qvector_reserve(a1 + 96, v22, v23 + 1, 1);
          v21 = v30;
          *(_QWORD *)(a1 + 96) = v17;
          v22 = v17;
          v23 = *(_QWORD *)(a1 + 104);
        }
      }
      else if ( v15 < v16 )
      {
        v27 = v29 >> 4;
        v20 = qvector_reserve(a1 + 96, v22, v23 + 1, 1);
        v21 = v27;
        *(_QWORD *)(a1 + 96) = v20;
        v22 = v20;
        v23 = *(_QWORD *)(a1 + 104);
      }
      *(_BYTE *)(v22 + v23) = v21;
      v7 = *(_QWORD *)(a1 + 104);
      v8 = *(_QWORD *)(a1 + 96);
      v9 = v7 + 1;
      v10 = *(_QWORD *)(a1 + 112);
      v11 = v7 + 2;
      v12 = v29 & 0xF;
      *(_QWORD *)(a1 + 104) = v9;
      v30 = v12;
      if ( (unsigned __int64)&v30 < v8 || (unsigned __int64)&v30 >= v8 + v10 )
      {
        if ( v10 < v11 )
        {
          v18 = qvector_reserve(a1 + 96, v8, v11, 1);
          v12 = v30;
          *(_QWORD *)(a1 + 96) = v18;
          v8 = v18;
          v9 = *(_QWORD *)(a1 + 104);
        }
      }
      else if ( v10 < v11 )
      {
        v28 = v12;
        v24 = qvector_reserve(a1 + 96, v8, v11, 1);
        v12 = v28;
        *(_QWORD *)(a1 + 96) = v24;
        v8 = v24;
        v9 = *(_QWORD *)(a1 + 104);
      }
      *(_BYTE *)(v8 + v9) = v12;
      ++v6;
      v13 = *(_QWORD *)(a1 + 104) + 1LL;
      *(_QWORD *)(a1 + 104) = v13;
      if ( v4 == v6 )
      {
        v19 = *(unsigned __int16 *)(a1 + 88);
        if ( v13 >= v19 )
          goto LABEL_18;
        v25 = *(_QWORD *)(a1 + 96);
        if ( *(_QWORD *)(a1 + 112) < v19 )
        {
          v26 = qvector_reserve(a1 + 96, v25, *(unsigned __int16 *)(a1 + 88), 1);
          v13 = *(_QWORD *)(a1 + 104);
          *(_QWORD *)(a1 + 96) = v26;
          v25 = v26;
        }
        memset((void *)(v25 + v13), 0, v19 - v13);
        *(_QWORD *)(a1 + 104) = v19;
        return 1;
      }
    }
  }
  else
  {
    v13 = *(_QWORD *)(a1 + 104);
    v19 = 0;
LABEL_18:
    if ( v19 != v13 )
      *(_QWORD *)(a1 + 104) = v19;
    return 1;
  }
  return result;
}

