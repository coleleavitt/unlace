__int64 __fastcall sub_20770(__int64 *a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  char v5; // al
  char v6; // al
  char v7; // dl
  __int64 v9; // [rsp+0h] [rbp-468h] BYREF
  __int64 v10; // [rsp+8h] [rbp-460h] BYREF
  const char *v11; // [rsp+10h] [rbp-458h] BYREF
  __int128 v12; // [rsp+18h] [rbp-450h]
  char v13[1032]; // [rsp+30h] [rbp-438h] BYREF
  unsigned __int64 v14; // [rsp+438h] [rbp-30h]

  v14 = __readfsqword(0x28u);
  qsnprintf();
  v9 = 0;
  v10 = 0;
  v11 = nullptr;
  v12 = 0;
  v4 = sub_1D840((unsigned __int8 *)&v9, a3);
  v5 = byte_7FAF8;
  if ( !(_BYTE)v4
    || (byte_7FAF8
      ? (v6 = sub_20460((__int64)&v9, a1, (__int64 *)&v11, v13))
      : (v6 = sub_1E130(a1, (__int64)&v11, (__int64)"%s", v13)),
        v7 = v6,
        v5 = byte_7FAF8,
        !v7) )
  {
    if ( v5 )
    {
      if ( !(_BYTE)v9 )
      {
        if ( (unsigned __int64)v12 <= 1 )
        {
LABEL_12:
          v4 = 0;
          goto LABEL_13;
        }
LABEL_18:
        sub_11270((__int64)"ADB %s", v11);
        goto LABEL_12;
      }
      sub_5D660(&v10, 0xFFFFFFFFLL);
    }
    LOWORD(v9) = 0;
    if ( (unsigned __int64)v12 <= 1 )
      goto LABEL_12;
    goto LABEL_18;
  }
  if ( byte_7FAF8 )
  {
    if ( !(_BYTE)v9 )
      goto LABEL_13;
    sub_5D660(&v10, 0xFFFFFFFFLL);
  }
  LOWORD(v9) = 0;
LABEL_13:
  if ( v11 )
  {
    *(_QWORD *)&v12 = 0;
    qfree();
  }
  return v4;
}

