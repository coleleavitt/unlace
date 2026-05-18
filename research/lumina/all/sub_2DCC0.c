__int64 __fastcall sub_2DCC0(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 368);
  if ( v1 )
  {
    if ( (*(_DWORD *)(v1 + 8))-- == 1 )
      result = (***(__int64 (__fastcall ****)(_QWORD))(a1 + 368))(*(_QWORD *)(a1 + 368));
  }
  *(_QWORD *)(a1 + 368) = 0;
  return result;
}
