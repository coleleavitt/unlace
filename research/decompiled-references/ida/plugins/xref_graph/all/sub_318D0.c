void __fastcall sub_318D0(void **a1)
{
  if ( *a1 )
  {
    if ( !_InterlockedSub((volatile signed __int32 *)*a1, 1u) )
      free(*a1);
  }
}

