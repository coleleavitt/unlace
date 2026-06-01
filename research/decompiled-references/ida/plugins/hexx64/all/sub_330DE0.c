__int64 __fastcall sub_330DE0(__int64 a1)
{
  __int64 v1; // rax
  __int64 i; // rcx
  int v3; // edx

  v1 = *(_QWORD *)(a1 + 48);
  for ( i = 0; v1; i += (v3 & 0x80) == 0 )
  {
    v3 = *(_DWORD *)(v1 + 4);
    v1 = *(_QWORD *)(v1 + 8);
  }
  return i;
}

