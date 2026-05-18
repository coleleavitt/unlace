bool __fastcall sub_199DC0(__int64 a1)
{
  if ( !a1 )
    return 0;
  if ( *(_QWORD *)(a1 + 8) <= 1u )
    return sem_post((sem_t *)(a1 + 24)) == 0;
  return sem_post(*(sem_t **)(a1 + 24)) == 0;
}
