__int64 __fastcall sub_329D50(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax

  v1 = a1 + 200;
  sub_D0960(a1);
  do
  {
    v1 += 8;
    clear_tinfo_t();
  }
  while ( v1 != a1 + 376 );
  do
  {
    v1 += 8;
    result = clear_tinfo_t();
  }
  while ( v1 != a1 + 408 );
  return result;
}

