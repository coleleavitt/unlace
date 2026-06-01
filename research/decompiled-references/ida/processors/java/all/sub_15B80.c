__int64 __fastcall sub_15B80(__int64 a1, unsigned __int16 a2, unsigned int a3)
{
  __int16 v4; // ax
  __int16 v6; // ax
  int v7; // eax
  int v8; // r8d
  int v9; // r9d
  char v10; // [rsp+4h] [rbp-B4h] BYREF
  char v11; // [rsp+5h] [rbp-B3h]
  __int16 v12; // [rsp+Ch] [rbp-ACh]
  __int16 v13; // [rsp+Eh] [rbp-AAh]
  _BYTE v14[136]; // [rsp+10h] [rbp-A8h] BYREF
  unsigned __int64 v15; // [rsp+98h] [rbp-20h]

  v15 = __readfsqword(0x28u);
  if ( sub_13D40(a1, 1, a2, 1u, &v10) )
  {
    if ( a3 == 2 )
    {
      if ( (v11 & 8) != 0 )
        return 1;
      if ( v12 )
      {
        v6 = v13;
        if ( (v13 & 0x8001) == 0 )
        {
          v13 &= 0x204u;
          if ( (v6 & 0x204) == 0x200 )
            return 1;
        }
      }
      goto LABEL_13;
    }
    if ( (v11 & 4) != 0 )
      return 1;
    if ( v12 )
    {
      v4 = v13;
      if ( (v13 & 0x8001) == 0 )
      {
        v13 &= 0x206u;
        if ( a3 == 3 )
        {
          v13 = v4 & 0x202;
          if ( (v4 & 0x202) == 0 )
            return 1;
          goto LABEL_13;
        }
        if ( (v4 & 0x206) == 0 )
          return 1;
      }
    }
  }
  if ( a3 )
  {
LABEL_13:
    v7 = sub_19470(a1, a3, v14);
    sub_19260(a1, (unsigned int)"Invalid signature (#%u)%s\n", a2, v7, v8, v9);
    return 0;
  }
  return 0;
}

