__int64 __fastcall sub_35950(__int64 a1, __int64 a2, __int64 *a3)
{
  int flags; // eax
  char v6; // al
  __int64 v7; // rdx
  __int64 v8; // [rsp+0h] [rbp-38h] BYREF
  __int64 v9; // [rsp+8h] [rbp-30h]
  unsigned __int64 v10; // [rsp+18h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  if ( (unsigned int)sub_4E2D0(a1) != 9 )
  {
    flags = get_flags_ex(a2, 4);
    if ( (~(_WORD)flags & 0x600) != 0 || (flags & 0x10000000) == 0 )
      return 0;
  }
  v8 = a2;
  v9 = -1;
  v6 = sub_31740(&v8, (__int64)&unk_7A0B8, 8u);
  v7 = v9;
  if ( !v6 )
  {
    if ( (unsigned __int8)sub_31740(&v8, (__int64)&unk_7A0B0, 8u) )
    {
      v7 = v9;
      goto LABEL_6;
    }
    return 0;
  }
LABEL_6:
  if ( a3 )
    *a3 = v7;
  return 1;
}

