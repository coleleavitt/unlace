__int64 __fastcall sub_4540(__int64 *a1, unsigned __int8 a2)
{
  char v2; // dl
  __int64 v3; // rax

  v2 = is_loaded();
  v3 = *a1;
  if ( v2 )
    return (*(__int64 (__fastcall **)(__int64 *, _QWORD))(v3 + 344))(a1, a2);
  else
    return (*(__int64 (__fastcall **)(__int64 *, __int16 *, __int64))(v3 + 136))(a1, word_5672, 0xFFFFFFFFLL);
}

