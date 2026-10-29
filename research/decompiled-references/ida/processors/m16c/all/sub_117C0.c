__int64 __fastcall sub_117C0(__int64 a1)
{
  unsigned __int16 byte; // ax

  byte = get_byte();
  *(_BYTE *)(*(_QWORD *)(a1 + 4352) + 40LL * *(int *)(a1 + 4360) + 73) = *(_BYTE *)(*(_QWORD *)(a1 + 4352) + 29LL) & 1;
  return sub_10D40(a1, *((unsigned int *)qword_1AF60 + ((byte >> 2) & 3)), 255, 255);
}

