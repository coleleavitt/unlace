__int64 __fastcall sub_175B0(__int64 a1, __int64 a2)
{
  bool v2; // cc
  __int64 result; // rax
  __int16 v4; // bp
  unsigned __int8 v5; // [rsp+7h] [rbp-21h] BYREF
  unsigned __int64 v6; // [rsp+8h] [rbp-20h]

  v2 = *(_BYTE *)(a2 + 6) <= 8u;
  v6 = __readfsqword(0x28u);
  if ( !v2 )
    return sub_17460(a1);
  if ( qlread(*(_QWORD *)(a1 + 16), &v5, 1) != 1 )
    *(_BYTE *)a1 = 1;
  LOWORD(result) = v5;
  if ( (v5 & 0x80u) != 0 )
  {
    v4 = (v5 << 8) & 0x7F00;
    if ( qlread(*(_QWORD *)(a1 + 16), &v5, 1) != 1 )
      *(_BYTE *)a1 = 1;
    LOWORD(result) = v4 + v5;
  }
  return (unsigned __int16)result;
}

