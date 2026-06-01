__int64 sub_1D8D0()
{
  __int64 v0; // rbx

  if ( sub_87270() )
  {
    v0 = qalloc_or_throw(2808);
    sub_1C480(v0);
  }
  else
  {
    v0 = 0;
    sub_1D740((__int64)"No libdwarf found.\n");
  }
  return v0;
}

