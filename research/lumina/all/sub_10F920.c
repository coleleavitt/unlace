__int64 (__fastcall *__fastcall sub_10F920(__int64 a1, __int64 a2))()
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 (__fastcall *result)(); // rax

  v2 = *(_QWORD *)(a1 + 40);
  sub_C3110(a1);
  result = (__int64 (__fastcall *)())*(unsigned int *)(*(_QWORD *)(v2 + 288) + 24LL);
  if ( !(_DWORD)result )
    return sub_10F340(v2, a2, v3, v4);
  return result;
}
