void __fastcall sub_CBBE0(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 112);
  ++*(_DWORD *)(a1 + 132);
  for ( ; v1; v1 = *(_QWORD *)(v1 + 64) )
    *(_DWORD *)(v1 + 24) = 1;
  sub_CBB20(*(_QWORD *)(a1 + 288), 0);
}
