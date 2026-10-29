__int64 __fastcall sub_3F410(__int64 a1, char a2)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 8);
  result = *(_BYTE *)(v2 + 4192) & 0xF8 | (4 * ((a2 & 2) == 0)) | ((a2 & 4) == 0) | (2 * (a2 & 1u));
  *(_BYTE *)(v2 + 4192) = *(_BYTE *)(v2 + 4192) & 0xF8 | (4 * ((a2 & 2) == 0)) | ((a2 & 4) == 0) | (2 * (a2 & 1));
  return result;
}

