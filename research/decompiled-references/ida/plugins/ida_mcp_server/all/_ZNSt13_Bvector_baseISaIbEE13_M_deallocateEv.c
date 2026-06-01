__int64 __fastcall std::_Bvector_base<std::allocator<bool>>::_M_deallocate(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)a1 )
  {
    operator delete(*(void **)a1, *(_QWORD *)(a1 + 32) - *(_QWORD *)a1);
    *(_QWORD *)a1 = 0;
    *(_DWORD *)(a1 + 8) = 0;
    *(_QWORD *)(a1 + 16) = 0;
    *(_DWORD *)(a1 + 24) = 0;
    *(_QWORD *)(a1 + 32) = 0;
    return a1;
  }
  return result;
}

