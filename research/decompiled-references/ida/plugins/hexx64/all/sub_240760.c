__int64 __fastcall sub_240760(__int64 a1, __int64 *a2, __int64 **a3, __int64 a4)
{
  unsigned int v4; // r14d
  __int64 v6; // rsi
  __int64 *v10; // rbx
  __int64 v11; // r13
  __int64 v12; // [rsp+0h] [rbp-48h] BYREF
  __int128 v13; // [rsp+8h] [rbp-40h]
  unsigned __int64 v14; // [rsp+18h] [rbp-30h]

  v4 = 0;
  v14 = __readfsqword(0x28u);
  v6 = *a2;
  v12 = 0;
  v13 = 0;
  if ( (v6 & 0x100) == 0 )
    return v4;
  if ( !get_tinfo_pdata() )
    goto LABEL_9;
  if ( a3 )
  {
    v10 = *a3;
    v11 = (__int64)&(*a3)[(_QWORD)a3[1]];
    if ( (__int64 *)v11 == v10 )
      goto LABEL_13;
    while ( (unsigned __int8)sub_2612E0(nullptr, (__int64)a2, 0, *v10, *(char *)(a1 + 7), 0) )
    {
      if ( (__int64 *)v11 == ++v10 )
        goto LABEL_13;
    }
LABEL_9:
    v4 = 0;
    goto LABEL_10;
  }
  if ( !(unsigned __int8)sub_2612E0(nullptr, (__int64)a2, 0, a4, *(char *)(a1 + 7), 0) )
    goto LABEL_9;
LABEL_13:
  sub_38CA10(a1, (__int64)&v12, 0);
  v4 = 1;
LABEL_10:
  if ( v12 )
  {
    *(_QWORD *)&v13 = 0;
    qfree(v12);
  }
  return v4;
}

