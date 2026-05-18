__int64 __fastcall sub_D3D10(__int64 *a1, void *(*a2)(void *), void *a3)
{
  __int64 v4; // rbx
  __int64 result; // rax

  *a1 = 0;
  v4 = sub_D1E10(40, (__int64)a2);
  result = 7;
  if ( v4 )
  {
    *(_QWORD *)(v4 + 16) = 0;
    *(_QWORD *)(v4 + 24) = a2;
    *(_QWORD *)(v4 + 32) = a3;
    *(_OWORD *)v4 = 0;
    if ( qword_241610 && (unsigned int)qword_241610(200) || pthread_create((pthread_t *)v4, nullptr, a2, a3) )
    {
      *(_DWORD *)(v4 + 8) = 1;
      *(_QWORD *)(v4 + 16) = a2(a3);
    }
    *a1 = v4;
    return 0;
  }
  return result;
}
