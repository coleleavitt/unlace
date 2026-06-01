__int64 __fastcall sub_A0BA0(__int64 a1, unsigned __int8 *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  unsigned int v6; // ebx
  unsigned int v8; // eax
  unsigned __int8 _0[4]; // [rsp+0h] [rbp+0h] BYREF
  signed int vars4; // [rsp+4h] [rbp+4h]
  unsigned __int64 vars18; // [rsp+18h] [rbp+18h]

  vars18 = __readfsqword(0x28u);
  sub_123A40((__int64)_0, a2, a3, a4);
  v6 = sub_126F10((unsigned __int64)_0, a1, vars4, v5);
  if ( (_BYTE)v6 )
  {
    LOBYTE(v8) = sub_1255D0(_0, a1, a3, 1);
    v6 = v8;
  }
  sub_11CDA0((__int64)_0);
  return v6;
}

