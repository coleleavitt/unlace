__int64 __fastcall sub_9C6E0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  _DWORD _0[6]; // [rsp+0h] [rbp+0h] BYREF
  unsigned __int64 vars18; // [rsp+18h] [rbp+18h]

  vars18 = __readfsqword(0x28u);
  sub_11F580(_0, a2);
  v4 = sub_122A50(_0, a1, _0[1]);
  if ( (_BYTE)v4 )
    v4 = sub_121110(_0, a1, a3, 1);
  sub_1188E0(_0);
  return v4;
}

