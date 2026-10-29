__int64 __fastcall sub_94ED0(_QWORD *a1, unsigned __int8 a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 (*v5)(); // rax

  if ( !a2 )
    (*(void (__fastcall **)(_QWORD *))(*a1 + 192LL))(a1);
  v4 = a1[3];
  if ( v4 && (v5 = *(__int64 (**)())(*(_QWORD *)v4 + 8LL), v5 != sub_94D90) )
    return ((__int64 (__fastcall *)(__int64, _QWORD, __int64))v5)(v4, a2, a3);
  else
    return 0;
}
