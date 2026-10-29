__int64 __fastcall sub_19E90(unsigned __int8 a1)
{
  char *v1; // rbx
  __int64 v2; // rsi

  v1 = "$_<>./()";
  set_cp_validity(2, 0, 1114112, 0);
  set_cp_validity(2, 65, 91, 1);
  set_cp_validity(2, 97, 123, 1);
  set_cp_validity(2, 48, 58, 1);
  do
  {
    v2 = (unsigned int)*v1++;
    set_cp_validity(2, v2, 0xFFFFFFFFLL, 1);
  }
  while ( v1 != "./()" );
  set_cp_validity(2, 92, 0xFFFFFFFFLL, 1);
  return sub_19DB0(2 - (unsigned int)a1, 92);
}

