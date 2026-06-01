__int64 __fastcall sub_12F90(__int64 a1, unsigned int a2, char *a3, unsigned __int64 a4)
{
  unsigned int v6; // r15d
  unsigned int v7; // eax
  unsigned int v9; // [rsp+Ch] [rbp-5Ch] BYREF
  __int64 v10; // [rsp+10h] [rbp-58h] BYREF
  __int128 v11; // [rsp+18h] [rbp-50h]
  unsigned __int64 v12; // [rsp+28h] [rbp-40h]

  v12 = __readfsqword(0x28u);
  v6 = sub_12D50(a2, a3, a4);
  if ( !(_BYTE)v6 )
  {
    v10 = 0;
    v11 = 0;
    do
    {
      if ( !(unsigned __int8)sub_12E40(&v9, (__int64)&v10) || v9 == 1 )
      {
        *a3 = 0;
        goto LABEL_7;
      }
      v7 = sub_12D50(v9, a3, a4);
    }
    while ( !(_BYTE)v7 );
    v6 = v7;
LABEL_7:
    if ( v10 )
    {
      *(_QWORD *)&v11 = 0;
      qfree();
    }
  }
  return v6;
}

