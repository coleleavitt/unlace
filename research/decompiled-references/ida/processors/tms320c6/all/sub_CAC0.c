__int64 __fastcall sub_CAC0(__int64 a1, __int64 a2, char a3)
{
  unsigned int v6; // eax
  _BYTE v7[136]; // [rsp+20h] [rbp-B8h] BYREF
  unsigned __int64 v8; // [rsp+A8h] [rbp-30h]

  v8 = __readfsqword(0x28u);
  if ( get_ea_name() > 0 )
  {
    switch ( a3 )
    {
      case 10:
        get_dword();
        btoa64();
        v6 = sub_AC30(a2, 0xFFFFFFFFLL, (__int64)&qword_10958, 0, v7);
        break;
      case 11:
        get_dword();
        btoa64();
        sub_AC30(a2, 0xFFFFFFFFLL, (__int64)&dword_10964, *(_QWORD *)(*(_QWORD *)(a1 + 24) + 232LL), 0, v7);
        return 0;
      case 1:
        v6 = sub_AC30(a2, 0xFFFFFFFFLL, (__int64)&word_1094E, *(_QWORD *)(*(_QWORD *)(a1 + 24) + 224LL), 0);
        break;
      default:
        return 0;
    }
    return v6;
  }
  return 0;
}

