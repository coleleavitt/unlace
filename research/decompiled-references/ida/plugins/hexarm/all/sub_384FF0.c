__int64 __fastcall sub_384FF0(__int64 a1)
{
  __int64 result; // rax

  get_place_class_id();
  result = get_place_class();
  if ( result )
  {
    result = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)result + 16LL))(result, 0);
    *(_QWORD *)(result + 16) = a1;
    *(_DWORD *)(result + 8) = -1;
  }
  return result;
}

