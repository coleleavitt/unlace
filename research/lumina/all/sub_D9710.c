__int64 __fastcall sub_D9710(_QWORD *a1, unsigned int a2)
{
  __int64 v2; // rax

  v2 = a1[9];
  if ( !v2 )
    return 0;
  if ( *(_DWORD *)(v2 + 32) )
    return sub_D3D10(*(__int64 **)v2, (void *(*)(void *))sub_D9900, a1);
  return sub_D95F0((__int64)a1, a2);
}
