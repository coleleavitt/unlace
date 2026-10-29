void __fastcall sub_166990(__int64 a1, _QWORD *a2)
{
  __int64 *v2; // rax
  __int64 *v3; // r12
  __int64 v4; // rdx
  const char *v5; // rax
  void *v6; // rdi

  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 88) + 32LL))(*(_QWORD *)(a1 + 88)) )
  {
    v2 = (__int64 *)operator new(0x18u);
    *v2 = a1;
    v3 = v2;
    v2[1] = (__int64)a2;
    v2[2] = sub_199C00(nullptr, 0);
    v4 = sub_19A480((void *(*)(void *))sub_166940, v3);
    if ( v4 )
    {
      sub_1664C0(a1, (unsigned __int64)a2, v4);
      if ( v3[2] )
        sub_199DC0();
    }
    else
    {
      v5 = (const char *)sub_18FFF0(-1);
      sub_2F0E0((__int64)a2, (__int64)"Failed to create thread: %s; cannot handle session\n", v5);
      if ( a2 )
        (*(void (__fastcall **)(_QWORD *))(*a2 + 8LL))(a2);
      if ( v3 )
      {
        v6 = (void *)v3[2];
        *(_OWORD *)v3 = 0;
        sub_199D50(v6);
        operator delete(v3, 0x18u);
      }
    }
  }
  else
  {
    sub_1664C0(a1, (unsigned __int64)a2, 0);
    sub_1667F0(a1, a2);
  }
}
