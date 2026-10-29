__int64 __fastcall sub_C5530(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rdi
  __int64 result; // rax

  v7 = *(_QWORD *)(a1 + 24);
  if ( v7 )
  {
    result = xmmword_241500(v7);
    v7 = *(_QWORD *)(a1 + 24);
  }
  if ( (int)a2 <= 0 )
  {
    *(_QWORD *)(a1 + 512) = 0;
    *(_DWORD *)(a1 + 528) = 0;
    *(_QWORD *)(a1 + 520) = 0;
  }
  else
  {
    *(_QWORD *)(a1 + 512) = a3;
    *(_DWORD *)(a1 + 528) = a2;
    *(_QWORD *)(a1 + 520) = a4;
  }
  if ( v7 )
    return xmmword_241510(v7, a2, a3);
  return result;
}
