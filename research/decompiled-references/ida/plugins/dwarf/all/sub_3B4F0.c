__int64 __fastcall sub_3B4F0(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 vars0; // [rsp+0h] [rbp+0h] BYREF
  __int64 vars8; // [rsp+8h] [rbp+8h]
  unsigned __int64 vars18; // [rsp+18h] [rbp+18h]

  v1 = *(_QWORD *)(a1 + 104);
  vars18 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 80);
  vars0 = 0;
  vars8 = 0;
  if ( ((unsigned __int8)sub_28340(v3, v1, 0x47u, &vars0)
     || (unsigned __int8)sub_28340(*(_QWORD *)(a1 + 80), *(_QWORD *)(a1 + 104), 0x31u, &vars0))
    && (v4 = vars8, v5 = sub_39BA0(*(_QWORD *)(vars8 + 144) + 72LL, (__int64)&vars0), v5 != *(_QWORD *)(v4 + 144) + 80LL) )
  {
    return *(_QWORD *)(v5 + 48);
  }
  else
  {
    return 0;
  }
}

