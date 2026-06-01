__int64 __fastcall sub_50530(__int64 *a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __m128i v6; // rax
  unsigned int v7; // ebp
  _DWORD *v9; // r15
  int v10; // edx
  void (__fastcall *v11)(_QWORD *); // rcx
  void (__fastcall *v12)(_QWORD *); // rdx
  _QWORD *v13; // rax
  _QWORD **v14; // rdx
  void *v15; // rdi
  _QWORD *v16; // rdx
  void *v17; // rcx
  void *v18; // rdx
  __int64 v19; // rdi
  __int64 v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rdx
  void *v26; // [rsp+8h] [rbp-80h]
  _QWORD **v27; // [rsp+8h] [rbp-80h]
  _QWORD *v28; // [rsp+8h] [rbp-80h]
  _QWORD *v29; // [rsp+8h] [rbp-80h]
  char v30; // [rsp+17h] [rbp-71h]
  void *v31; // [rsp+18h] [rbp-70h]
  void *v32; // [rsp+18h] [rbp-70h]
  __int64 v33; // [rsp+28h] [rbp-60h] BYREF
  __m128i v34; // [rsp+30h] [rbp-58h] BYREF
  __int64 v35; // [rsp+40h] [rbp-48h]
  unsigned __int64 v36; // [rsp+48h] [rbp-40h]

  v36 = __readfsqword(0x28u);
  v6.m128i_i64[0] = sub_951C0(a2, a3);
  v34 = v6;
  v7 = sub_4F650(a1, (__int64)a2, &v34, a4);
  if ( !(_BYTE)v7 )
    return v7;
  v9 = *(_DWORD **)(sub_87DA0(a2) + 216);
  if ( !v9 )
    return v7;
  v10 = v9[2];
  if ( v9[31] == 10 )
  {
    if ( v10 )
    {
LABEL_21:
      v21 = *a2;
      v33 = 0;
      v22 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(v21 + 16) + 144LL) + 192LL);
      v34.m128i_i32[0] = 0;
      v34.m128i_i64[1] = -1;
      v35 = v22;
      if ( (unsigned __int8)sub_55710(&v33, &v34, a4, 0) )
      {
        if ( *(_DWORD *)v33 == 1 )
        {
          v23 = *(_QWORD *)(v33 + 8);
          if ( *(_DWORD *)(v23 + 272) == 3 )
          {
            if ( v23 )
            {
              v24 = sub_5A0C0(a1 + 3, a2, 2, 4);
              v25 = *(_QWORD *)(a4 + 8);
              *(_DWORD *)(v24 + 392) = 1;
              *(_QWORD *)(v24 + 400) = v25;
              *(_QWORD *)(a4 + 8) = v24;
            }
          }
        }
      }
      return v7;
    }
    v30 = v7;
  }
  else
  {
    if ( v10 )
      return v7;
    v30 = 0;
  }
  v11 = **(void (__fastcall ***)(_QWORD *))v9;
  if ( v11 == sub_15E30 )
  {
    v12 = *(void (__fastcall **)(_QWORD *))(*(_QWORD *)v9 + 16LL);
    if ( v12 == sub_15D70 )
    {
      *(_QWORD *)v9 = &off_C71D8;
      v13 = *((_QWORD **)v9 + 16);
      v31 = v13;
      if ( v13 )
      {
        v14 = (_QWORD **)v13[2];
        if ( v14 )
        {
          do
          {
            v26 = v14;
            sub_293E0(v14[3]);
            v15 = v26;
            v27 = *((_QWORD ***)v26 + 2);
            operator delete(v15, 0x30u);
            v14 = v27;
          }
          while ( v27 );
        }
        operator delete(v31, 0x30u);
      }
      v16 = *((_QWORD **)v9 + 19);
      if ( v16 )
      {
        do
        {
          v28 = v16;
          sub_29E10((_QWORD *)v16[3]);
          v17 = v28;
          v18 = (void *)v28[2];
          v19 = v28[4];
          if ( v19 )
          {
            v28[5] = 0;
            v32 = v18;
            qfree(v19);
            v18 = v32;
            v17 = v28;
          }
          v29 = v18;
          operator delete(v17, 0x48u);
          v16 = v29;
        }
        while ( v29 );
      }
      v20 = *((_QWORD *)v9 + 12);
      if ( v20 )
      {
        *((_QWORD *)v9 + 13) = 0;
        qfree(v20);
      }
      operator delete(v9, 0xC0u);
    }
    else
    {
      v12(v9);
    }
  }
  else
  {
    v11(v9);
  }
  if ( v30 )
    goto LABEL_21;
  return v7;
}

