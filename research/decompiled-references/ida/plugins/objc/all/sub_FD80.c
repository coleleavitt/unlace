__int64 __fastcall sub_FD80(__int64 *a1, unsigned __int64 *a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  unsigned int v5; // eax
  unsigned int v6; // ebp
  int _32bit; // eax
  int v9; // eax
  __int64 v10; // rax
  __int64 v11; // rdx
  char v12; // al
  unsigned __int64 v13; // rdx
  _QWORD v14[7]; // [rsp+0h] [rbp-38h] BYREF

  v3 = *a1;
  v4 = a1[35] + a3;
  v14[1] = __readfsqword(0x28u);
  v5 = (*(__int64 (__fastcall **)(__int64 *, unsigned __int64 *, __int64))(v3 + 144))(a1, a2, v4);
  if ( !(_BYTE)v5 )
    return 0;
  if ( !*a2 )
    return 0;
  v6 = v5;
  _32bit = get_32bit();
  if ( _32bit == -1 )
    return 0;
  if ( _32bit >= 0 )
    return v6;
  v9 = sub_D110(a1[1]);
  if ( v9 )
  {
    if ( v9 == 1 )
    {
      v10 = *a1;
      v11 = *a2 + a1[49];
      v14[0] = 0;
      if ( (*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD *, __int64))(v10 + 136))(a1, v14, v11) )
      {
        v12 = v14[0];
        v13 = v14[0] & 0xFFFFFFFFFFFFFFFELL;
        v14[0] &= ~1uLL;
        if ( (v12 & 1) == 0 )
        {
LABEL_13:
          *a2 = v13;
          return v6;
        }
        if ( (*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD *, unsigned __int64))(*a1 + 144))(
               a1,
               v14,
               a1[50] + v13) )
        {
          v13 = v14[0];
          goto LABEL_13;
        }
      }
    }
    return 0;
  }
  return (*(__int64 (__fastcall **)(__int64 *, unsigned __int64 *, unsigned __int64))(*a1 + 144))(a1, a2, *a2 + a1[45]);
}
