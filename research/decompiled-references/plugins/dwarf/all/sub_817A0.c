__int64 __fastcall sub_817A0(_QWORD *a1, _QWORD *a2)
{
  int v2; // eax
  __int64 result; // rax

  if ( !*a1 )
  {
    v2 = dword_D08E0 + 1;
    *a1 = (char *)&unk_CC8E0 + 1024 * (__int64)dword_D08E0;
    *a2 = 1024;
    result = (unsigned int)(v2 % 16);
    dword_D08E0 = result;
  }
  return result;
}
