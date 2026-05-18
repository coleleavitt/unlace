__int64 __fastcall sub_CA280(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    result = *(_QWORD *)(result + 344);
    if ( result )
    {
      ++*(_DWORD *)(result + 48);
      *(_DWORD *)(result + 24) = 18;
    }
  }
  return result;
}
