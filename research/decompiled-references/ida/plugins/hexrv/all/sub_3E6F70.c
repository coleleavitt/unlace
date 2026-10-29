void __fastcall sub_3E6F70(__int64 a1, int a2)
{
  __int64 v3; // rax
  __int64 v4; // rsi
  __int64 v5; // rax

  if ( *(_DWORD *)(a1 + 608) <= a2 && *(_DWORD *)(a1 + 620) >= a2 )
  {
    v3 = *(_QWORD *)(a1 + 712);
    v4 = *(_QWORD *)(a1 + 704);
    if ( *(_QWORD *)(a1 + 720) < (unsigned __int64)(v3 + 1) )
    {
      v5 = qvector_reserve();
      *(_QWORD *)(a1 + 704) = v5;
      v4 = v5;
      v3 = *(_QWORD *)(a1 + 712);
    }
    *(_DWORD *)(v4 + 4 * v3) = a2;
    ++*(_QWORD *)(a1 + 712);
  }
}

