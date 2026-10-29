unsigned __int64 __fastcall sub_12C5D0(unsigned __int64 *a1, __int64 a2, __int64 a3, __int64 a4, __m128i a5)
{
  __int64 v5; // r12
  unsigned __int8 *v6; // rbp
  int v7; // eax
  unsigned __int8 *v8; // r15
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned __int8 *v14; // rbp
  __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned __int8 v19; // al
  int v20; // edx
  __int64 v21; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int8 *v22; // [rsp+8h] [rbp-50h]
  unsigned __int64 v23; // [rsp+18h] [rbp-40h]

  v5 = a2 + 32;
  v23 = __readfsqword(0x28u);
  sub_123A40((__int64)&v21, (unsigned __int8 *)(a2 + 32), a3, a4);
  v6 = v22;
  v7 = *(_DWORD *)v22;
  if ( *(_DWORD *)v22 != 10 )
  {
    v8 = v22 + 32;
    if ( v7 == 63 )
    {
LABEL_3:
      *(_DWORD *)a2 = 64;
      v9 = *((_DWORD *)v6 + 1);
      goto LABEL_4;
    }
    *(_DWORD *)a2 = v7;
    v8 = v6 + 32;
    v9 = *((_DWORD *)v6 + 1);
    goto LABEL_4;
  }
  v19 = v22[32];
  if ( v19 == 10 || v19 == 4 )
  {
    *(_DWORD *)a2 = 10;
    v9 = *((_DWORD *)v6 + 1);
    v8 = v6 + 32;
    goto LABEL_16;
  }
  v8 = v22 + 32;
  if ( (unsigned __int8)sub_12AB50((unsigned int **)v22 + 4, a1, *(_DWORD *)(a2 + 68), 1, a5) )
  {
    *(_DWORD *)v6 = 4;
    *(_DWORD *)a2 = 4;
    v9 = *((_DWORD *)v6 + 1);
    goto LABEL_4;
  }
  v20 = *(_DWORD *)v6;
  if ( *(_DWORD *)v6 == 63 )
    goto LABEL_3;
  *(_DWORD *)a2 = v20;
  v9 = *((_DWORD *)v6 + 1);
  if ( v20 == 10 )
LABEL_16:
    v9 &= ~0x10u;
LABEL_4:
  *(_DWORD *)(a2 + 4) = v9;
  if ( (unsigned __int8 *)v5 != v8 )
  {
    sub_11CDA0(v5);
    sub_123A40(v5, v8, v10, v11);
  }
  if ( v6 + 48 != (unsigned __int8 *)(a2 + 48) )
  {
    sub_11CDA0(a2 + 48);
    sub_123A40(a2 + 48, v6 + 48, v12, v13);
  }
  if ( (unsigned int)(*(_DWORD *)a2 - 56) <= 1 )
  {
    v14 = v6 + 64;
    v15 = a2 + 64;
    if ( v14 != (unsigned __int8 *)(a2 + 64) )
    {
      sub_11CDA0(v15);
      sub_123A40(v15, v14, v16, v17);
    }
  }
  sub_11CDA0((__int64)&v21);
  return v23 - __readfsqword(0x28u);
}

