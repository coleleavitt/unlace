__int64 __fastcall sub_102660(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  __int64 v4; // rdx
  __int64 v5; // rdi
  __int64 v6; // rbp
  __int64 result; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  void *v12; // rax
  void *v13; // rax
  __int64 v14; // r12
  __int64 v15; // rax
  __int64 v16; // rdi

  a2 = (unsigned int)a2;
  v2 = *(_QWORD *)(a1 + 16);
  v4 = 2 * v2;
  v5 = (unsigned int)a2 + v2 + 10;
  if ( (unsigned int)a2 >= v2 )
    v4 = (unsigned int)a2 + v2 + 10;
  v6 = v4;
  if ( *(_BYTE *)(a1 + 32) )
  {
    result = 1;
    if ( *(_BYTE *)(a1 + 33) )
      return result;
    if ( !(unsigned int)sub_FEBD0(v5, (unsigned int)a2) )
    {
      v12 = (void *)sub_D1E10(v6, (unsigned int)a2);
      if ( v12 )
      {
        v13 = memcpy(v12, *(const void **)(a1 + 8), *(_QWORD *)(a1 + 24));
        *(_BYTE *)(a1 + 32) = 0;
        *(_QWORD *)(a1 + 8) = v13;
LABEL_14:
        *(_QWORD *)(a1 + 16) = v6;
        return 0;
      }
    }
  }
  else
  {
    v14 = *(_QWORD *)(a1 + 8);
    if ( !(unsigned int)sub_FEBD0(v5, (unsigned int)a2) )
    {
      a2 = v6;
      v15 = sub_D2640(v14, v6);
      if ( v15 )
      {
        *(_QWORD *)(a1 + 8) = v15;
        goto LABEL_14;
      }
    }
  }
  v16 = *(_QWORD *)a1;
  *(_BYTE *)(a1 + 33) = 1;
  sub_E1560(v16, a2, v8, v9, v10, v11);
  if ( !*(_BYTE *)(a1 + 32) )
    sub_C91C0(*(_QWORD *)(a1 + 8), a2);
  *(_QWORD *)(a1 + 16) = 100;
  *(_QWORD *)(a1 + 24) = 0;
  *(_BYTE *)(a1 + 32) = 1;
  *(_QWORD *)(a1 + 8) = a1 + 34;
  return 7;
}
