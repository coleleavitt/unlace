__int64 __fastcall sub_10740(__int64 a1, const void *a2, __int64 a3)
{
  unsigned int v4; // ebx
  unsigned int v6; // eax
  __int64 (__fastcall **v7)(); // [rsp+0h] [rbp-3B8h] BYREF
  char v8; // [rsp+8h] [rbp-3B0h]
  _BYTE v9[360]; // [rsp+10h] [rbp-3A8h] BYREF
  unsigned int *v10; // [rsp+178h] [rbp-240h]
  __int64 v11; // [rsp+188h] [rbp-230h]
  int v12; // [rsp+210h] [rbp-1A8h]
  __int64 v13; // [rsp+330h] [rbp-88h]
  __int64 v14; // [rsp+338h] [rbp-80h]
  __int64 v15; // [rsp+348h] [rbp-70h]
  __int64 v16; // [rsp+350h] [rbp-68h]
  __int64 v17; // [rsp+360h] [rbp-58h]
  __int64 v18; // [rsp+368h] [rbp-50h]
  __int64 v19; // [rsp+378h] [rbp-40h]
  char v20; // [rsp+380h] [rbp-38h]
  __int64 v21; // [rsp+384h] [rbp-34h]
  char v22; // [rsp+38Ch] [rbp-2Ch]
  unsigned __int64 v23; // [rsp+398h] [rbp-20h]

  v23 = __readfsqword(0x28u);
  sub_E800((__int64)&v7, a1, (__int64)qword_181D0, 1);
  v20 = 10;
  qmemcpy(v9, a2, sizeof(v9));
  v21 = 0x6FFFFFFFFLL;
  v22 = 10;
  v8 = 0;
  v19 = a3;
  v12 = 0;
  v7 = off_1C860;
  v4 = 0;
  if ( (unsigned __int8)match_jpt() )
  {
    if ( v11 == -1 )
    {
      v6 = *v10 & 0xFFFFFE7F;
      LOBYTE(v6) = *(_BYTE *)v10 & 0x7F | 0x80;
      *v10 = v6;
    }
    sub_106C0((__int64)&v7, 2);
    v4 = 1;
  }
  v7 = off_1DBA0;
  if ( v17 )
  {
    v18 = 0;
    qfree();
  }
  if ( v15 )
  {
    v16 = 0;
    qfree();
  }
  if ( v13 )
  {
    v14 = 0;
    qfree();
  }
  return v4;
}

