unsigned __int64 __fastcall sub_12C010(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  unsigned __int8 *v3; // rbp
  int v4; // eax
  unsigned __int8 *v5; // r15
  int v6; // eax
  unsigned __int8 *v7; // rbp
  __int64 v8; // rbx
  unsigned __int8 v10; // al
  int v11; // edx
  __int64 v12; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int8 *v13; // [rsp+8h] [rbp-50h]
  unsigned __int64 v14; // [rsp+18h] [rbp-40h]

  v2 = a2 + 32;
  v14 = __readfsqword(0x28u);
  sub_123480((__int64)&v12, (unsigned __int8 *)(a2 + 32));
  v3 = v13;
  v4 = *(_DWORD *)v13;
  if ( *(_DWORD *)v13 != 10 )
  {
    v5 = v13 + 32;
    if ( v4 == 63 )
    {
LABEL_3:
      *(_DWORD *)a2 = 64;
      v6 = *((_DWORD *)v3 + 1);
      goto LABEL_4;
    }
    *(_DWORD *)a2 = v4;
    v5 = v3 + 32;
    v6 = *((_DWORD *)v3 + 1);
    goto LABEL_4;
  }
  v10 = v13[32];
  if ( v10 == 10 || v10 == 4 )
  {
    *(_DWORD *)a2 = 10;
    v6 = *((_DWORD *)v3 + 1);
    v5 = v3 + 32;
    goto LABEL_16;
  }
  v5 = v13 + 32;
  if ( (unsigned __int8)sub_12A590((unsigned __int64)(v13 + 32), a1, *(_DWORD *)(a2 + 68), 1) )
  {
    *(_DWORD *)v3 = 4;
    *(_DWORD *)a2 = 4;
    v6 = *((_DWORD *)v3 + 1);
    goto LABEL_4;
  }
  v11 = *(_DWORD *)v3;
  if ( *(_DWORD *)v3 == 63 )
    goto LABEL_3;
  *(_DWORD *)a2 = v11;
  v6 = *((_DWORD *)v3 + 1);
  if ( v11 == 10 )
LABEL_16:
    v6 &= ~0x10u;
LABEL_4:
  *(_DWORD *)(a2 + 4) = v6;
  if ( (unsigned __int8 *)v2 != v5 )
  {
    sub_11C7E0(v2);
    sub_123480(v2, v5);
  }
  if ( v3 + 48 != (unsigned __int8 *)(a2 + 48) )
  {
    sub_11C7E0(a2 + 48);
    sub_123480(a2 + 48, v3 + 48);
  }
  if ( (unsigned int)(*(_DWORD *)a2 - 56) <= 1 )
  {
    v7 = v3 + 64;
    v8 = a2 + 64;
    if ( v7 != (unsigned __int8 *)(a2 + 64) )
    {
      sub_11C7E0(v8);
      sub_123480(v8, v7);
    }
  }
  sub_11C7E0((__int64)&v12);
  return v14 - __readfsqword(0x28u);
}

