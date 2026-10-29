__int64 __fastcall sub_13540(__int64 a1, __int64 a2)
{
  int v2; // ecx
  int v3; // edx
  int v4; // esi
  int v5; // eax
  __int64 result; // rax
  int v7; // ebx
  int v8; // ebp

  v2 = 0;
  v3 = 0;
  v4 = *(__int16 *)(a2 + 34);
  do
  {
    v5 = v4 >> v2++;
    v3 += v5 & 1;
  }
  while ( v2 != 13 );
  result = v4 & 1;
  v7 = ((v4 & 2) == 0) + v3 - result - 1;
  v8 = 0;
  if ( v7 > 0 )
  {
    do
    {
      ++v8;
      result = (*(__int64 (__fastcall **)(__int64, char *, __int64))(*(_QWORD *)a1 + 56LL))(a1, ")", 9);
    }
    while ( v7 != v8 );
  }
  return result;
}

