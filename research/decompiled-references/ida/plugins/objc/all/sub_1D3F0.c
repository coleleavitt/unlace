unsigned __int64 __fastcall sub_1D3F0(__int64 a1, __int64 a2)
{
  unsigned int v3; // r12d
  unsigned int v4; // [rsp+14h] [rbp-64h] BYREF
  __int64 v5; // [rsp+18h] [rbp-60h] BYREF
  __int64 (__fastcall **v6)(); // [rsp+20h] [rbp-58h] BYREF
  __int64 v7; // [rsp+28h] [rbp-50h]
  unsigned __int64 v8; // [rsp+38h] [rbp-40h]

  v8 = __readfsqword(0x28u);
  v5 = -1;
  v4 = 0;
  if ( (unsigned __int8)sub_14FD0(a1, &v5, &v4) )
  {
    create_data();
    set_cmt();
    v3 = v4;
    if ( v4 > 0xE )
    {
      create_data();
      set_cmt();
      create_data();
      set_cmt();
      sub_1C870(a1, a2);
      create_data();
      set_cmt();
      sub_198E0(a2);
      v6 = &off_3C1B8;
      v7 = 0x100000003LL;
      sub_15730(a1, (__int64)&v6);
    }
    else
    {
      create_data();
      set_cmt();
      sub_1C870(a1, a2);
      if ( v3 <= 0xA )
        return v8 - __readfsqword(0x28u);
      create_data();
      set_cmt();
      sub_198E0(a2);
      v6 = &off_3C1B8;
      v7 = 0x100000003LL;
      sub_15730(a1, (__int64)&v6);
      if ( v3 == 11 )
        return v8 - __readfsqword(0x28u);
    }
    create_data();
    set_cmt();
    sub_1CEF0(a1, a2);
    if ( v3 != 12 )
    {
      create_data();
      set_cmt();
      sub_1D290(a1, a2);
      if ( v3 > 0xE )
      {
        create_data();
        set_cmt();
        sub_198E0(a2);
        v6 = &off_3C1B8;
        v7 = 0x400000003LL;
        sub_15730(a1, (__int64)&v6);
      }
    }
  }
  return v8 - __readfsqword(0x28u);
}
