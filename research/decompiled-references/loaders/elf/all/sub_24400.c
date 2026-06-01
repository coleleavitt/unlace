__int64 __fastcall sub_24400(__int64 a1, int a2, __int64 a3, unsigned __int64 a4, char a5)
{
  __int64 v5; // r15
  unsigned int byte; // eax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdx
  char v14; // al
  __int64 v15; // rsi
  unsigned __int8 v16; // [rsp+Fh] [rbp-39h]
  unsigned __int8 v17; // [rsp+Fh] [rbp-39h]
  char v18; // [rsp+Fh] [rbp-39h]

  v5 = a3 - 1;
  byte = get_byte(a3 - 1);
  v12 = byte;
  if ( a2 == 42 )
  {
    v17 = byte;
    v14 = get_byte(a3 - 3);
    v15 = v14 & 0xFBu | ((v14 & 4) != 0);
    if ( (v14 & 8) != 0 )
    {
      put_byte(a3 - 3, v15);
      v12 = v17;
      if ( (int)a4 == a4 )
        goto LABEL_3;
      goto LABEL_9;
    }
    put_byte(a3 - 3, v15);
    v12 = v17;
  }
  if ( !HIDWORD(a4) )
    goto LABEL_3;
LABEL_9:
  v18 = v12;
  sub_40E00(a3, a4, v12, v10, v11);
  LOBYTE(v12) = v18;
LABEL_3:
  v16 = ((unsigned __int8)v12 >> 3) & 7;
  if ( a5 == -123 )
  {
    put_byte(a3 - 2, 247);
    put_byte(v5, v16 | 0xC0u);
  }
  else
  {
    put_byte(a3 - 2, 129);
    put_byte(v5, v16 | a5 & 0x38 | 0xC0u);
  }
  sub_424F0(a1, a3, a4, 0, 4, 0, 0, 0);
  sub_40E20(a1, a3 - 2, 0);
  return 1;
}
