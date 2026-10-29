__int64 __fastcall sub_193C0(__int64 a1)
{
  unsigned int v1; // ebp
  __int64 v3; // rdi
  __int64 v4; // r14
  __int64 v5; // r12
  _QWORD *v6; // rbx
  __int64 idati; // [rsp+10h] [rbp-68h] BYREF
  __int128 v8; // [rsp+18h] [rbp-60h]
  __int128 v9; // [rsp+28h] [rbp-50h]
  __int64 v10; // [rsp+38h] [rbp-40h]
  int v11; // [rsp+40h] [rbp-38h]
  unsigned __int64 v12; // [rsp+48h] [rbp-30h]

  v1 = (unsigned __int8)byte_3D5E8;
  v12 = __readfsqword(0x28u);
  if ( byte_3D5E8 )
  {
    return 0;
  }
  else
  {
    byte_3D5E8 = 1;
    *(_DWORD *)(a1 + 752) = register_custom_refinfo();
    WORD4(v8) = 256;
    *(_QWORD *)&v8 = "__objc2_relative_list_header";
    idati = get_idati();
    if ( !(unsigned __int8)create_tinfo() || get_tinfo_tid() == -1 )
    {
      sub_EC40();
    }
    else
    {
      idati = 0;
      v10 = 0;
      v11 = 1;
      v8 = 0;
      v9 = 0;
      v1 = sub_ED00((__int64)&idati, (__int64 *)(a1 + 136), (__int64 *)(a1 + 256));
      if ( !(_BYTE)v1 )
        sub_EC40();
      v3 = idati;
      if ( idati )
      {
        v4 = v8;
        if ( (_QWORD)v8 )
        {
          v5 = 0;
          do
          {
            v6 = (_QWORD *)(v3 + 144 * v5);
            clear_tinfo_t();
            if ( v6[5] )
            {
              v6[6] = 0;
              qfree();
            }
            if ( v6[2] )
            {
              v6[3] = 0;
              qfree();
            }
            ++v5;
            v3 = idati;
          }
          while ( v4 != v5 );
        }
        *(_QWORD *)&v8 = 0;
        qfree();
      }
    }
    clear_tinfo_t();
  }
  return v1;
}
