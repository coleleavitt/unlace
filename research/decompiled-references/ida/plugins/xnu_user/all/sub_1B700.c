__int64 __fastcall sub_1B700(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // r12
  const char *v5; // rsi
  const char *v6; // rsi
  __int64 v7; // rax
  const char *v8; // rdi
  const char *v10; // [rsp+0h] [rbp-38h] BYREF
  __int128 v11; // [rsp+8h] [rbp-30h]
  unsigned __int64 v12; // [rsp+18h] [rbp-20h]

  v12 = __readfsqword(0x28u);
  v10 = nullptr;
  v11 = 0;
  v3 = sub_158F0();
  v4 = v3;
  v5 = src;
  if ( *(_QWORD *)(a1 + 16) )
    v5 = *(const char **)(a1 + 8);
  if ( (unsigned __int8)sub_6ADC0(v3, v5, &v10) )
  {
    *(_QWORD *)(sub_15850() + 864) = v4;
    free_idcv();
    v7 = 1;
  }
  else
  {
    v6 = src;
    if ( (_QWORD)v11 )
      v6 = v10;
    sub_140F0((__int64)"%s\n", v6);
    free_idcv();
    v7 = 0;
  }
  v8 = v10;
  *(_BYTE *)a2 = 2;
  *(_QWORD *)(a2 + 8) = v7;
  if ( v8 )
  {
    *(_QWORD *)&v11 = 0;
    qfree();
  }
  return 0;
}

