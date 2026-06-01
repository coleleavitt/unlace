void __fastcall sub_3A8E0(__int64 a1)
{
  if ( &_pthread_key_create )
    _InterlockedAdd((volatile signed __int32 *)(a1 + 8), 1u);
  else
    ++*(_DWORD *)(a1 + 8);
}
