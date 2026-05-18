__int64 __fastcall sub_C5B90(char *a1)
{
  int v1; // ecx
  int v2; // edx
  int v3; // r8d
  int v4; // edi

  v1 = *a1;
  v2 = a1[1];
  v3 = a1[2];
  v4 = a1[3];
  return (((((v1 >> 6) & 1) + (_BYTE)v1 + 8 * ((v1 >> 6) & 1)) & 0xF) << 12)
       + (((((v2 >> 6) & 1) + (_BYTE)v2 + 8 * ((v2 >> 6) & 1)) & 0xF) << 8)
       + (((_BYTE)v4 + 8 * ((v4 >> 6) & 1) + ((v4 >> 6) & 1)) & 0xF)
       + 16 * (((_BYTE)v3 + 8 * ((v3 >> 6) & 1) + ((v3 >> 6) & 1)) & 0xFu);
}
