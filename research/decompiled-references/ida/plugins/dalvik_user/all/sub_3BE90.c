__int64 __fastcall sub_3BE90(__int64 a1, __int64 *a2)
{
  __int64 v2; // r12
  _QWORD *v4; // rax
  const char *v5; // rdx
  const char *v6; // rsi
  _DWORD v8[6]; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v9; // [rsp+18h] [rbp-20h]

  v2 = *(_QWORD *)(a1 + 8);
  v9 = __readfsqword(0x28u);
  if ( (debug & 0x40000) != 0 )
  {
    v4 = *(_QWORD **)(v2 + 48);
    v5 = nptr;
    if ( v4[5] )
    {
      v5 = (const char *)v4[4];
      v6 = nptr;
      if ( !v4[2] )
        goto LABEL_4;
    }
    else
    {
      v6 = nptr;
      if ( !v4[2] )
      {
LABEL_4:
        sub_111A0((__int64)"DEXSIP: aloc_var_calc_number_of_children %s`%s\n", v6, v5);
        goto LABEL_5;
      }
    }
    v6 = (const char *)v4[1];
    goto LABEL_4;
  }
LABEL_5:
  if ( *(_BYTE *)(*(_QWORD *)(v2 + 48) + 88LL) && (unsigned __int8)sub_3A080(v8, (const char *)a1, 0, a2) )
    return sub_3BC00(a1, a2);
  else
    return 0;
}

