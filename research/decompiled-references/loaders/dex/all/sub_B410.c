_BOOL8 __fastcall sub_B410(int *a1, __int64 a2)
{
  return (int)sub_B290((__int64)a1, a2, 4, 1) >= 0
      && (int)sub_B290((__int64)a1, a2 + 4, 4, 1) >= 0
      && (int)sub_B290((__int64)a1, a2 + 8, a1[108], 1) >= 0
      && (int)sub_B290((__int64)a1, a2 + 16, a1[106], 1) >= 0
      && (int)sub_B290((__int64)a1, a2 + 24, a1[107], 1) >= 0
      && (int)sub_B290((__int64)a1, a2 + 32, a1[108], 1) >= 0
      && (int)sub_B290((__int64)a1, a2 + 40, 4, 1) >= 0
      && (int)sub_B290((__int64)a1, a2 + 44, 4, 1) >= 0
      && (int)sub_B290((__int64)a1, a2 + 48, a1[108], 1) >= 0
      && (int)sub_B290((__int64)a1, a2 + 56, a1[108], 1) >= 0;
}
