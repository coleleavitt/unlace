bool __fastcall sub_5B360(__int64 a1, _QWORD *a2)
{
  bool result; // al
  int v3; // eax
  _BYTE *v4; // rax

  result = (unsigned int)sub_5ABF0(a1, a2) == 1
        && (v3 = sub_5AB40(a1), *(_BYTE *)(a1 + 16) = 0, v3 == 1)
        && *(_QWORD *)(a1 + 32) == 2
        && (v4 = *(_BYTE **)(a1 + 24), *v4 == 79)
        && v4[1] == 75;
  return result;
}

