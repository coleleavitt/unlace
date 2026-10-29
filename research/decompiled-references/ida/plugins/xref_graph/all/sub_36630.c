unsigned __int64 __fastcall sub_36630(_DWORD ***a1, __int64 *a2, double a3, __m128 a4, __int64 a5, _BYTE *a6)
{
  bool v6; // zf
  __int64 v7; // rdx
  _QWORD v9[3]; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v10; // [rsp+18h] [rbp-10h]

  v6 = *a6 == 0;
  v10 = __readfsqword(0x28u);
  v7 = *a2;
  if ( v6 )
    sub_35E10(v9, a1[1], v7, a3, a4);
  else
    sub_35E10(v9, *a1, v7, a3, a4);
  return v10 - __readfsqword(0x28u);
}

