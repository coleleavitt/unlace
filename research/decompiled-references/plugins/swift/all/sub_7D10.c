__int64 __fastcall sub_7D10(__int64 a1)
{
  __int64 v1; // r12
  __int64 v3; // rdx
  __int64 v4; // r13
  __int64 i; // rbx
  __int64 *v6; // rax
  __int64 v7; // rdi
  __int64 result; // rax
  __int64 v9; // rdi

  v1 = a1 + 136;
  *(_QWORD *)a1 = off_27708;
  sub_1BF90(a1 + 136);
  clr_module_data((unsigned int)dword_29940);
  v3 = *(_QWORD *)(a1 + 536);
  if ( v3 )
  {
    v4 = *(_QWORD *)(a1 + 544);
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = (__int64 *)(v3 + 24 * i);
        v7 = *v6;
        if ( *v6 )
        {
          v6[1] = 0;
          qfree(v7);
          v3 = *(_QWORD *)(a1 + 536);
        }
      }
    }
    *(_QWORD *)(a1 + 544) = 0;
    qfree(v3);
  }
  sub_7B90(*(void **)(a1 + 504));
  sub_7C10(*(void **)(a1 + 456));
  *(_QWORD *)(a1 + 216) = &off_27D20;
  remove_event_listener(a1 + 216);
  *(_QWORD *)(a1 + 192) = &off_27D20;
  remove_event_listener(a1 + 192);
  *(_QWORD *)(a1 + 168) = &off_27D20;
  remove_event_listener(a1 + 168);
  result = sub_1BF90(v1);
  v9 = *(_QWORD *)(a1 + 112);
  if ( v9 )
  {
    *(_QWORD *)(a1 + 120) = 0;
    return qfree(v9);
  }
  return result;
}
