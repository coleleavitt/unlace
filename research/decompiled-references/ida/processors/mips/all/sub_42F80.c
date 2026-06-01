__int64 __fastcall sub_42F80(__int64 a1, __int64 a2)
{
  unsigned int v2; // r8d
  unsigned __int16 *v4; // rax
  unsigned __int16 *v5; // rbp
  unsigned int v6; // r13d
  unsigned int v7; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v8; // [rsp+8h] [rbp-30h]

  v8 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a2 + 8) & 1) == 0
    && (v4 = sub_410D0(a1, &v7, (_WORD *)(a2 + 26), *(_QWORD *)(a2 + 16)), (v5 = v4) != nullptr)
    && (v6 = v7, (unsigned __int8)sub_42EF0(a1, a2, v7, v4)) )
  {
    *(_WORD *)(a2 + 24) = sub_41030(a1, (_BYTE *)a2, v6, *v5);
  }
  else
  {
    return 0;
  }
  return v2;
}

