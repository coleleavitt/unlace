__int64 __fastcall sub_176250(__int64 a1)
{
  unsigned int v1; // ebp
  __int64 i; // rbx
  int v3; // eax

  v1 = 0;
  for ( i = *(_QWORD *)(*(_QWORD *)(a1 + 520) + 8LL); i; v1 += v3 )
  {
    v3 = sub_175F90(i);
    i = *(_QWORD *)(i + 8);
  }
  return v1;
}

