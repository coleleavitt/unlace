bool __fastcall sub_65EA0(__int64 a1, _QWORD *a2)
{
  bool result; // al
  int v3; // eax
  _BYTE *v4; // rax

  result = (unsigned int)sub_65730(a1, a2) == 1
        && (v3 = sub_65680(a1), *(_BYTE *)(a1 + 16) = 0, v3 == 1)
        && *(_QWORD *)(a1 + 32) == 2
        && (v4 = *(_BYTE **)(a1 + 24), *v4 == 79)
        && v4[1] == 75;
  return result;
}

